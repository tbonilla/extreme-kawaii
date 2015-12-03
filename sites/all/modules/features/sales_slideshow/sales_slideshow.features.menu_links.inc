<?php
/**
 * @file
 * sales_slideshow.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function sales_slideshow_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_sales-slideshow:node/add/sales-slideshow
  $menu_links['navigation_sales-slideshow:node/add/sales-slideshow'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/sales-slideshow',
    'router_path' => 'node/add/sales-slideshow',
    'link_title' => 'Sales Slideshow',
    'options' => array(
      'identifier' => 'navigation_sales-slideshow:node/add/sales-slideshow',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Sales Slideshow');

  return $menu_links;
}
