# Example Kostym Components for Drupal 7

Here are a few example of Kostym components in Drupal 7. These examples requires the [Kostym module](https://github.com/kostym/drupal-7-module) to work and assumes that the [Kostym gulpfile](https://github.com/kostym/drupal-7-gulpfile.js) is used. 

* [Panels layout](#panels-layout)
* [Panels style](#panels-style)
* ctools content type
* twig with slate
* theme template override
* theme function override 
* theme template suggestion

## Panels layout
**Component:** TwoColumns

When naming a sub-folder in a component, panels-layouts, the kostym module is going to find it and get auto-enabled by the kostym module.

<pre>
kostym_components
└── <b>TwoColumns</b>
    ├── TwoColumns.js
    ├── _TwoColumns.scss
    └── panels-layouts
        ├── TwoColumns.admin.css
        ├── TwoColumns.inc
        ├── TwoColumns.png
        └── two-columns.tpl.php
</pre>

## Panels style

**Component:** Box

Panels style get auto-enabled by the kostym module.
<pre>
kostym_components
└── <b>Box</b>
    ├── _Box.scss
    └── panels-styles
        ├── Box.inc
        └── box.tpl.php
</pre>
