<?php

$plugin = array(
  'title' => t('Box'),
  'render pane' => 'Box_style_render_pane',
  'pane settings form' => 'Box_style_settings_form',
  'hook theme' => array(
    'Box' => array(
      'variables' => array('title' => NULL, 'content' => NULL, 'plate' => NULL),
      'path' => drupal_get_path('theme', 'MyTheme') . '/kostym_components/Box/panels-styles',
      'template' => 'box',
    ),
  ),
);

function theme_Box_style_render_pane($vars) {
  $settings = $vars['settings'];
  $title = !empty($vars['content']->title) ? $vars['content']->title : '';
  $content = render($vars['content']->content);

  return theme('Box', array(
    'title' => $title,
    'content' => $content,
    'plate' => isset($settings['box']) ? $settings['plate'] : TRUE,
  ));
}

/**
 * Settings form callback.
 */
function Box_style_settings_form($style_settings) {
  $form['plate'] = array(
    '#type' => 'checkbox',
    '#title' => t('Plate background'),
    '#default_value' => (isset($style_settings['plate'])) ? $style_settings['box'] : TRUE,
  );

  return $form;
}
