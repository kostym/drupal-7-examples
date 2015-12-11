<?php if (!empty($content)): ?>
<div class="Box">
  <?php if (!empty($title)): ?>
    <h3 class="Box-heading"><?php print $title ?></h3>
  <?php endif;?>
  <div class="Box-content<?php if ($plate): ?> Box-content--box<?php endif;?>">
    <?php print $content ?>
  </div>
</div>
<?php endif;?>
