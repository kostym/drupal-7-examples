<?php
/**
* This plugin array is more or less self documenting
*/
$plugin = array(
  'single' => TRUE,
  'title' => t('Kostym Logo'),
  'category' => t('Kostym Components'),
  'render callback' => '_Logo_render',
);

function _Logo_render($subtype, $conf, $args, $context) {
  $attributes['attributes']['class'][] = 'Logo';
  $attributes['attributes']['title'] = t('Go to startpage');
  $block = new stdClass();
  $block->content = l(t("Kostym"), '<front>', $attributes);
  return $block;
}
