<?php
/**
 * @file
 * sales_slideshow.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function sales_slideshow_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'sales_slideshow';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Sales Slideshow';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'flexslider';
  $handler->display->display_options['style_options']['optionset'] = 'main_rotations';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: sales_imgs */
  $handler->display->display_options['fields']['field_sales_imgs']['id'] = 'field_sales_imgs';
  $handler->display->display_options['fields']['field_sales_imgs']['table'] = 'field_data_field_sales_imgs';
  $handler->display->display_options['fields']['field_sales_imgs']['field'] = 'field_sales_imgs';
  $handler->display->display_options['fields']['field_sales_imgs']['label'] = '';
  $handler->display->display_options['fields']['field_sales_imgs']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_sales_imgs']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_sales_imgs']['settings'] = array(
    'image_style' => 'flexslider_full',
    'image_link' => '',
  );
  $handler->display->display_options['fields']['field_sales_imgs']['group_rows'] = FALSE;
  $handler->display->display_options['fields']['field_sales_imgs']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'sales_slideshow' => 'sales_slideshow',
  );

  /* Display: Sales */
  $handler = $view->new_display('block', 'Sales', 'block');
  $translatables['sales_slideshow'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Sales'),
  );
  $export['sales_slideshow'] = $view;

  return $export;
}
