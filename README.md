# Example Kostym components for Drupal 7

Here are a few examples of how different components can be implemented in Drupal 7.

* [Panels layout](#panels-layout)
* [Panels style](#panels-style)
* [Ctools content type](#ctools-content-type)
* [Theme function override](#theme-function-override) 
* [Template override](#template-override)
* [Twig file with slate module](#twig-with-slate-module)
* [View mode override with slate module](#view-mode-override-with-slate-module)
* [Views style plugin](#views-style-plugin)


**Note:** These examples requires the [Kostym module](https://github.com/kostym/drupal-7-module) to work and assumes that the [Kostym gulpfile](https://github.com/kostym/drupal-7-gulpfile.js) is used. 

## Panels layout
Component: **[TwoColumns](https://github.com/kostym/drupal-7-examples/tree/master/TwoColumns)**

For a panels layout to get auto-detected by the Kostym module, you just place it under a subfolder called `panels-layouts`.

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

For a panels style to get auto-detected by the Kostym module, you just place it under a subfolder called `panels-styles`.
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

For a ctools content type to get auto-detected by the Kostym module, you just place it under a subfolder called `ctools-content_types`.
<pre>
kostym_components
└── <b>Logo</b>
    ├── _Logo.scsssubfolder
    └── <b>ctools-content_types</b>
        └── Logo.inc
</pre>

## Theme function override 

Component: **[StatusMessages](https://github.com/kostym/drupal-7-examples/tree/master/StatusMessages)**

**Note:** Right now there is no [support for theme function with suggestions](https://github.com/kostym/drupal-7-module/issues/1). 

<pre>
kostym_components
└── <b>StatusMessages</b>
    ├── StatusMessages.info
    ├── StatusMessages.module
    └── _StatusMessages.scss
</pre>

## Template override

Component: **[Page](https://github.com/kostym/drupal-7-examples/tree/master/Page)**

Read more about [template overrides and suggestions](https://www.drupal.org/node/1089656).

<pre>
kostym_components
└── <b>Page</b>
    ├── node--page.tpl.php
    └── _Page.scss
</pre>

## Twig with slate module

Component: **[Video](https://github.com/kostym/drupal-7-examples/tree/master/Video)**

This component is dependent on the [slate module](https://www.drupal.org/project/slate).

<pre>
kostym_components
└── <b>Video</b>
    ├── Video.html.twig
    └── _Video.scss
</pre>

## View mode override with slate module

Component: **[ArticleTeaser](https://github.com/kostym/drupal-7-examples/tree/master/ArticleTeaser)**

This component is dependent on the [slate module](https://www.drupal.org/project/slate).

<pre>
kostym_components
└── <b>ArticleTeaser</b>
    ├── ArticleTeaser.html.twig
    └── _ArticleTeaser.scss
</pre>

## Views style plugin

Component: **[CompactList](https://github.com/kostym/drupal-7-examples/tree/master/CompactList)**

<pre>
kostym_components
└── <b> CompactList</b>
    ├── CompactList.info
    ├── CompactList.module
    ├── CompactList.tpl.php
    ├── CompactList.views.inc
    └── _CompactList.scss
</pre>
