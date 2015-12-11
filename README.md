# Example Kostym components for Drupal 7

Here are a few example of Kostym components in Drupal 7. These examples requires the [Kostym module](https://github.com/kostym/drupal-7-module) to work and assumes that the [Kostym gulpfile](https://github.com/kostym/drupal-7-gulpfile.js) is used. 

* [Panels layout](#panels-layout)
* [Panels style](#panels-style)
* [Ctools content Type](#ctools-content-type)
* [Theme function override](#theme-function-override) 
* theme template override
* theme template suggestion
* twig with slate

## Panels layout
Component: **[TwoColumns](https://github.com/kostym/drupal-7-examples/tree/master/TwoColumns)**

For a panels layout to get auto-detected by the Kostym module, you just place it under a sub-folder called `panels-layouts`.

<pre>
kostym_components
└── <b>TwoColumns</b>
    ├── TwoColumns.js
    ├── _TwoColumns.scss
    └── <b>panels-layouts</b>
        ├── TwoColumns.admin.css
        ├── TwoColumns.inc
        ├── TwoColumns.png
        └── two-columns.tpl.php
</pre>

## Panels style

Component: **[Box](https://github.com/kostym/drupal-7-examples/tree/master/Box)**

For a panels style to get auto-detected by the Kostym module, you just place it under a sub-folder called `panels-styles`.
<pre>
kostym_components
└── <b>Box</b>
    ├── _Box.scss
    └── <b>panels-styles</b>
        ├── Box.inc
        └── box.tpl.php
</pre>

## Ctools content Type

Component: **[Logo](https://github.com/kostym/drupal-7-examples/tree/master/Logo)**

For a ctools content type to get auto-detected by the Kostym module, you just place it under a sub-folder called `ctools-content_types`.
<pre>
kostym_components
└── <b>Logo</b>
    ├── _Logo.scss
    └── <b>ctools-content_types</b>
        └── Logo.inc
</pre>


## Theme function override 

Component: **[StatusMessages](https://github.com/kostym/drupal-7-examples/tree/master/StatusMessages)**

<pre>
kostym_components
└── <b>StatusMessages</b>
    ├── StatusMessages.info
    ├── StatusMessages.module
    └── _StatusMessages.scss
</pre>
