<?php
/**
 * @file
 * taxonomies_and_content_type.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function taxonomies_and_content_type_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function taxonomies_and_content_type_node_info() {
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
