<?php
/**
 * @file
 * HTML template functions.
 */

/**
 * Implements hook_preprocess_page()
 *
 */
function manati_preprocess_page(&$variables) {

  // Livereload - Disable this on production
  drupal_add_js('//localhost:35729/livereload.js', array('type' => 'external', 'scope' => 'footer'));

}

/**
 * Implements hook_preprocess_html().
 * Meta tags https://drupal.org/node/1468582#comment-5698732
 */
function manati_preprocess_html(&$variables) {
  $meta_charset = array(
    '#tag' => 'meta',
    '#attributes' => array(
      'charset' => 'utf-8',
    ),
  );
  drupal_add_html_head($meta_charset, 'meta_charset');

  $meta_x_ua_compatible = array(
    '#tag' => 'meta',
    '#attributes' => array(
      'http-equiv' => 'x-ua-compatible',
      'content' => 'ie=edge, chrome=1',
    ),
  );
  drupal_add_html_head($meta_x_ua_compatible, 'meta_x_ua_compatible');

  $meta_mobile_optimized = array(
    '#tag' => 'meta',
    '#attributes' => array(
      'name' => 'MobileOptimized',
      'content' => 'width',
    ),
  );
  drupal_add_html_head($meta_mobile_optimized, 'meta_mobile_optimized');

  $meta_handheld_friendly = array(
    '#tag' => 'meta',
    '#attributes' => array(
      'name' => 'HandheldFriendly',
      'content' => 'true',
    ),
  );
  drupal_add_html_head($meta_handheld_friendly, 'meta_handheld_friendly');

  $meta_viewport = array(
    '#tag' => 'meta',
    '#attributes' => array(
      'name' => 'viewport',
      'content' => 'width=device-width, initial-scale=1',
    ),
  );
  drupal_add_html_head($meta_viewport, 'meta_viewport');

  $meta_cleartype = array(
    '#tag' => 'meta',
    '#attributes' => array(
      'http-equiv' => 'cleartype',
      'content' => 'on',
    ),
  );
  drupal_add_html_head($meta_cleartype, 'meta_cleartype');

  // TODO: Include this using Yeoman generator settings
  // Use html5shiv.
  $element = array(
   'element' => array(
     '#tag' => 'script',
     '#value' => '',
     '#attributes' => array(
       'type' => 'text/javascript',
       'src' => 'https://cdnjs.cloudflare.com/ajax/libs/html5shiv/3.7.3/html5shiv-printshiv.min.js',
     ),
   ),
  );
  $html5shiv = array(
   '#type' => 'markup',
   '#markup' => "<!--[if lt IE 9]>\n" . theme('html_tag', $element) . "<![endif]-->\n",
  );
  drupal_add_html_head($html5shiv, 'manati_theme_html5shiv');
  // ENDTODO

  // TODO: Include this using Yeoman generator settings
  // Use Respond.js.
  $element = array(
   'element' => array(
     '#tag' => 'script',
     '#value' => '',
     '#attributes' => array(
       'type' => 'text/javascript',
       'src' => 'https://cdnjs.cloudflare.com/ajax/libs/respond.js/1.4.2/respond.min.js',
     ),
   ),
  );
  $respondjs = array(
   '#type' => 'markup',
   '#markup' => "<!--[if lt IE 9]>\n" . theme('html_tag', $element) . "<![endif]-->\n",
  );
  drupal_add_html_head($respondjs, 'manati_theme_respondjs');
  // ENDTODO

  // TODO: Include this using Yeoman generator settings
  // Use normalize.css
  drupal_add_css('https://cdnjs.cloudflare.com/ajax/libs/normalize/3.0.3/normalize.min.css', array('type' => 'external', 'group' => CSS_SYSTEM, 'weight' => -1000));
  // ENDTODO
}

/**
 * Implements hook_html_head_alter().
 */
function manati_html_head_alter(&$head_elements) {

  // Remove system content type meta tag.
  unset($head_elements['system_meta_content_type']);
}

/**
 * Implements hook_page_alter().
 * https://gist.github.com/jacine/1378246
 */
function manati_page_alter(&$page) {
  // Remove all the region wrappers.
  foreach (element_children($page) as $key => $region) {
    if (!empty($page[$region]['#theme_wrappers'])) {
      $page[$region]['#theme_wrappers'] = array_diff($page[$region]['#theme_wrappers'], array('region'));
    }
  }
  // Remove the wrapper from the main content block.
  if (!empty($page['content']['system_main'])) {
    $page['content']['system_main']['#theme_wrappers'] = array_diff($page['content']['system_main']['#theme_wrappers'], array('block'));
  }
}

function manati_preprocess_node(&$vars) {
  // Add a striping class.
  $vars['classes_array'][] = 'node-' . $vars['zebra'];
}

function manati_preprocess_block(&$vars, $hook) {
  // Add a striping class.
  $vars['classes_array'][] = 'block-' . $vars['zebra'];
}
