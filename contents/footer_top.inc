<?php
/**
 * Basic ad injections
 *
 * @package    BardCanvas
 * @subpackage basic_ad_injections
 * @author     Alejandro Caballero - lava.caballero@gmail.com
 */

global $config;

$contents = $settings->get("modules:basic_ad_injections.footer_code");
$contents = autolink_hash_tags($contents, "{$config->full_root_path}/tag/");
$contents = convert_emojis($contents);
$template->set("footer_contents", $contents );
