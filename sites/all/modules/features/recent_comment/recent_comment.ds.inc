<?php
/**
 * @file
 * recent_comment.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function recent_comment_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'comment|comment_node_products_display|default';
  $ds_fieldsetting->entity_type = 'comment';
  $ds_fieldsetting->bundle = 'comment_node_products_display';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'author' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'ds_user_picture' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'ds_picture_thumbnail',
    ),
  );
  $export['comment|comment_node_products_display|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|products_display|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'products_display';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => 'h2',
        'class' => 'name-product',
      ),
    ),
    'comments' => array(
      'weight' => '5',
      'label' => 'above',
      'format' => 'default',
    ),
  );
  $export['node|products_display|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function recent_comment_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'comment|comment_node_products_display|default';
  $ds_layout->entity_type = 'comment';
  $ds_layout->bundle = 'comment_node_products_display';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'ds_user_picture',
        1 => 'author',
        2 => 'title',
        3 => 'field_rating',
        4 => 'field_review',
      ),
    ),
    'fields' => array(
      'ds_user_picture' => 'ds_content',
      'author' => 'ds_content',
      'title' => 'ds_content',
      'field_rating' => 'ds_content',
      'field_review' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['comment|comment_node_products_display|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|products_display|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'products_display';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'right' => array(
        0 => 'title',
        2 => 'field_manufacturer',
        4 => 'field_prices',
        5 => 'body',
        7 => 'field_rating',
      ),
      'left' => array(
        1 => 'field_product_imgs',
        3 => 'field_product_video',
      ),
      'footer' => array(
        6 => 'comments',
      ),
    ),
    'fields' => array(
      'title' => 'right',
      'field_product_imgs' => 'left',
      'field_manufacturer' => 'right',
      'field_product_video' => 'left',
      'field_prices' => 'right',
      'body' => 'right',
      'comments' => 'footer',
      'field_rating' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|products_display|full'] = $ds_layout;

  return $export;
}
