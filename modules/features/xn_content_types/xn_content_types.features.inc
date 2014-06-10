<?php
/**
 * @file
 * xn_content_types.features.inc
 */

/**
 * Implements hook_node_info().
 */
function xn_content_types_node_info() {
  $items = array(
    'candidate' => array(
      'name' => t('Candidate'),
      'base' => 'node_content',
      'description' => t('Candidate module where Candidates can answer questions '),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
