<?php
/**
 * @file
 * categories_list.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function categories_list_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_categories:admin/structure/menu/manage/menu-tags
  $menu_links['management_categories:admin/structure/menu/manage/menu-tags'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/structure/menu/manage/menu-tags',
    'router_path' => 'admin/structure/menu/manage/%',
    'link_title' => 'Categories',
    'options' => array(
      'identifier' => 'management_categories:admin/structure/menu/manage/menu-tags',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_menus:admin/structure/menu',
  );
  // Exported menu link: menu-tags_categories:<front>
  $menu_links['menu-tags_categories:<front>'] = array(
    'menu_name' => 'menu-tags',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Categories',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-tags_categories:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Categories');

  return $menu_links;
}
