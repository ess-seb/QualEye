delimiter $$

CREATE DATABASE `qualeye_no_1` /*!40100 DEFAULT CHARACTER SET latin1 */$$

delimiter $$

CREATE TABLE `qualeye_no_1`.`probs` (
  `id_pp` mediumint(9) NOT NULL AUTO_INCREMENT,
  `file_path` text,
  `date` datetime NOT NULL,
  `scale_ratio` double NOT NULL,
  PRIMARY KEY (`id_pp`)
) ENGINE=InnoDB DEFAULT CHARSET=latin1$$

delimiter $$

CREATE TABLE `qualeye_no_1`.`blobs` (
  `id_b` mediumint(9) NOT NULL AUTO_INCREMENT,
  `id_p` mediumint(9) NOT NULL,
  `roi_x` double NOT NULL,
  `roi_y` double NOT NULL,
  `roi_w` double NOT NULL,
  `roi_h` double NOT NULL,
  `sf_h` double NOT NULL,
  `sf_v` double NOT NULL,
  `area` double NOT NULL,
  `len` double NOT NULL,
  PRIMARY KEY (`id_b`),
  KEY `probs_vs_blobs` (`id_p`),
  CONSTRAINT `probs_vs_blobs` FOREIGN KEY (`id_p`) REFERENCES `probs` (`id_pp`) ON DELETE NO ACTION ON UPDATE NO ACTION
) ENGINE=InnoDB DEFAULT CHARSET=latin1$$

