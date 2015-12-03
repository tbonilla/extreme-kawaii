<?php
/**
 * @file
 * top_products.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function top_products_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function top_products_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function top_products_node_info() {
  $items = array(
    'products_display' => array(
      'name' => t('Products Display'),
      'base' => 'node_content',
      'description' => t('All products of Extreme Kawaii.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
