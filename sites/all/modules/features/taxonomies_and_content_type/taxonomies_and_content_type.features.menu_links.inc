<?php
/**
 * @file
 * taxonomies_and_content_type.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function taxonomies_and_content_type_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_accessories:taxonomy/term/10
  $menu_links['main-menu_accessories:taxonomy/term/10'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/10',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Accessories',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_accessories:taxonomy/term/10',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
    'parent_identifier' => 'main-menu_categories:<front>',
  );
  // Exported menu link: main-menu_bags:taxonomy/term/9
  $menu_links['main-menu_bags:taxonomy/term/9'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/9',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Bags',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_bags:taxonomy/term/9',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
    'parent_identifier' => 'main-menu_categories:<front>',
  );
  // Exported menu link: main-menu_bottoms:taxonomy/term/2
  $menu_links['main-menu_bottoms:taxonomy/term/2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/2',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Bottoms',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_bottoms:taxonomy/term/2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_categories:<front>',
  );
  // Exported menu link: main-menu_categories:<front>
  $menu_links['main-menu_categories:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Categories',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_categories:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 1,
    'expanded' => 1,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_contact:<front>
  $menu_links['main-menu_contact:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Contact',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_contact:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_dresses:taxonomy/term/3
  $menu_links['main-menu_dresses:taxonomy/term/3'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/3',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Dresses',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_dresses:taxonomy/term/3',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_categories:<front>',
  );
  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_how-to-buy:<front>
  $menu_links['main-menu_how-to-buy:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'How to buy?',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_how-to-buy:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_one-pieces:taxonomy/term/6
  $menu_links['main-menu_one-pieces:taxonomy/term/6'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/6',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'One-Pieces',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_one-pieces:taxonomy/term/6',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'main-menu_categories:<front>',
  );
  // Exported menu link: main-menu_shoes:taxonomy/term/8
  $menu_links['main-menu_shoes:taxonomy/term/8'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/8',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Shoes',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_shoes:taxonomy/term/8',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'parent_identifier' => 'main-menu_categories:<front>',
  );
  // Exported menu link: main-menu_sweaters:taxonomy/term/4
  $menu_links['main-menu_sweaters:taxonomy/term/4'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/4',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Sweaters',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_sweaters:taxonomy/term/4',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_categories:<front>',
  );
  // Exported menu link: main-menu_swimsuits:taxonomy/term/5
  $menu_links['main-menu_swimsuits:taxonomy/term/5'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/5',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Swimsuits',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_swimsuits:taxonomy/term/5',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_categories:<front>',
  );
  // Exported menu link: main-menu_tights-socks:taxonomy/term/7
  $menu_links['main-menu_tights-socks:taxonomy/term/7'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/7',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Tights-Socks',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_tights-socks:taxonomy/term/7',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'main-menu_categories:<front>',
  );
  // Exported menu link: main-menu_tops:taxonomy/term/1
  $menu_links['main-menu_tops:taxonomy/term/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'taxonomy/term/1',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Tops',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_tops:taxonomy/term/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 1,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_categories:<front>',
  );
  // Exported menu link: menu-tags_accessories:taxonomy/term/10
  $menu_links['menu-tags_accessories:taxonomy/term/10'] = array(
    'menu_name' => 'menu-tags',
    'link_path' => 'taxonomy/term/10',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Accessories',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-tags_accessories:taxonomy/term/10',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
  );
  // Exported menu link: menu-tags_bags:taxonomy/term/9
  $menu_links['menu-tags_bags:taxonomy/term/9'] = array(
    'menu_name' => 'menu-tags',
    'link_path' => 'taxonomy/term/9',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Bags',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-tags_bags:taxonomy/term/9',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
  );
  // Exported menu link: menu-tags_bottoms:taxonomy/term/2
  $menu_links['menu-tags_bottoms:taxonomy/term/2'] = array(
    'menu_name' => 'menu-tags',
    'link_path' => 'taxonomy/term/2',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Bottoms',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-tags_bottoms:taxonomy/term/2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: menu-tags_dresses:taxonomy/term/3
  $menu_links['menu-tags_dresses:taxonomy/term/3'] = array(
    'menu_name' => 'menu-tags',
    'link_path' => 'taxonomy/term/3',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Dresses',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-tags_dresses:taxonomy/term/3',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: menu-tags_one-pieces:taxonomy/term/6
  $menu_links['menu-tags_one-pieces:taxonomy/term/6'] = array(
    'menu_name' => 'menu-tags',
    'link_path' => 'taxonomy/term/6',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'One-Pieces',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-tags_one-pieces:taxonomy/term/6',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: menu-tags_shoes:taxonomy/term/8
  $menu_links['menu-tags_shoes:taxonomy/term/8'] = array(
    'menu_name' => 'menu-tags',
    'link_path' => 'taxonomy/term/8',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Shoes',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-tags_shoes:taxonomy/term/8',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
  );
  // Exported menu link: menu-tags_sweaters:taxonomy/term/4
  $menu_links['menu-tags_sweaters:taxonomy/term/4'] = array(
    'menu_name' => 'menu-tags',
    'link_path' => 'taxonomy/term/4',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Sweaters',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-tags_sweaters:taxonomy/term/4',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: menu-tags_swimsuits:taxonomy/term/5
  $menu_links['menu-tags_swimsuits:taxonomy/term/5'] = array(
    'menu_name' => 'menu-tags',
    'link_path' => 'taxonomy/term/5',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Swimsuits',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-tags_swimsuits:taxonomy/term/5',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: menu-tags_tights-socks:taxonomy/term/7
  $menu_links['menu-tags_tights-socks:taxonomy/term/7'] = array(
    'menu_name' => 'menu-tags',
    'link_path' => 'taxonomy/term/7',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Tights-Socks',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-tags_tights-socks:taxonomy/term/7',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
  );
  // Exported menu link: menu-tags_tops:taxonomy/term/1
  $menu_links['menu-tags_tops:taxonomy/term/1'] = array(
    'menu_name' => 'menu-tags',
    'link_path' => 'taxonomy/term/1',
    'router_path' => 'taxonomy/term/%',
    'link_title' => 'Tops',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-tags_tops:taxonomy/term/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Accessories');
  t('Bags');
  t('Bottoms');
  t('Categories');
  t('Contact');
  t('Dresses');
  t('Home');
  t('How to buy?');
  t('One-Pieces');
  t('Shoes');
  t('Sweaters');
  t('Swimsuits');
  t('Tights-Socks');
  t('Tops');

  return $menu_links;
}
