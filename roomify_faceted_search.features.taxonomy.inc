<?php
/**
 * @file
 * roomify_faceted_search.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function roomify_faceted_search_taxonomy_default_vocabularies() {
  return array(
    'attributes' => array(
      'name' => 'Attributes',
      'machine_name' => 'attributes',
      'description' => 'Bookable unit attributes',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
