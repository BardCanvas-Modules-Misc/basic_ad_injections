<?php
/**
 * Basic ad injections
 *
 * @package    BardCanvas
 * @subpackage basic_ad_injections
 * @author     Alejandro Caballero - lava.caballero@gmail.com
 */

global $config;

$key = "modules:basic_ad_injections."
     . str_replace(".inc", "", basename(__FILE__));

$contents = $settings->get($key);
$contents = autolink_hash_tags($contents, "{$config->full_root_path}/tag/");
$contents = convert_emojis($contents);
?>

<!-- Basic ad injections: home content -->

<?= $contents ?>
