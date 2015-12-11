<div class="TwoColumns u-cf">
  <?php if (!empty($content['main'])): ?>
    <section class="TwoColumns-main">
      <?php print render($content['main']);?>
    </section><?php endif;?>
  <?php if (!empty($content['sidebar'])): ?>
    <aside class="TwoColumns-sidebar">
      <?php print render($content['sidebar']);?>
    </aside>
  <?php endif;?>
</div>