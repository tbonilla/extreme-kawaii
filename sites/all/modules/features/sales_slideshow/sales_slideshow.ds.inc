<?php
/**
 * @file
 * sales_slideshow.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function sales_slideshow_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|sales_slideshow|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'sales_slideshow';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_sales_imgs',
      ),
    ),
    'fields' => array(
      'field_sales_imgs' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => TRUE,
    'layout_link_attribute' => FALSE,
    'layout_link_custom' => '',
  );
  $export['node|sales_slideshow|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|sales_slideshow|teaser';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'sales_slideshow';
  $ds_layout->view_mode = 'teaser';
  $ds_layout->layout = 'ds_reset';
  $ds_layout->settings = array(
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => FALSE,
    'regions' => array(
      'ds_content' => array(
        0 => 'field_sales_imgs',
      ),
    ),
    'fields' => array(
      'field_sales_imgs' => 'ds_content',
    ),
  );
  $export['node|sales_slideshow|teaser'] = $ds_layout;

  return $export;
}
