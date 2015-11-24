<?php
/**
 * @file
 * taxonomies_and_content_type.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function taxonomies_and_content_type_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: menu-tags.
  $menus['menu-tags'] = array(
    'menu_name' => 'menu-tags',
    'title' => 'Categories',
    'description' => 'Products categories',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Categories');
  t('Main menu');
  t('Products categories');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');


  return $menus;
}
