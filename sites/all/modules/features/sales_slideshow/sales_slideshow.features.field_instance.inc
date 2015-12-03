<?php
/**
 * @file
 * sales_slideshow.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function sales_slideshow_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-sales_slideshow-field_sales_imgs'
  $field_instances['node-sales_slideshow-field_sales_imgs'] = array(
    'bundle' => 'sales_slideshow',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'flexslider_fields',
        'settings' => array(
          'caption' => 0,
          'image_style' => 'flexslider_full',
          'optionset' => 'main_rotations',
        ),
        'type' => 'flexslider',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'juicebox',
        'settings' => array(
          'apply_markup_filter' => 1,
          'caption_source' => '',
          'custom_parent_classes' => '',
          'image_style' => 'large',
          'incompatible_file_action' => 'show_icon_and_link',
          'jlib_backgroundColor' => '#222222',
          'jlib_galleryHeight' => '400px',
          'jlib_galleryWidth' => '100%',
          'jlib_showExpandButton' => 0,
          'jlib_showOpenButton' => 0,
          'jlib_showThumbsButton' => 0,
          'jlib_textColor' => 'rgba(255,255,255,1)',
          'jlib_thumbFrameColor' => 'rgba(255,255,255,.5)',
          'jlib_useFullscreenExpand' => 0,
          'jlib_useThumbDots' => 1,
          'linkurl_source' => '',
          'linkurl_target' => '_blank',
          'manual_config' => '',
          'thumb_style' => 'juicebox_square_thumbnail',
          'title_source' => '',
        ),
        'type' => 'juicebox_formatter',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_sales_imgs',
    'label' => 'sales_imgs',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 32,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('sales_imgs');

  return $field_instances;
}
