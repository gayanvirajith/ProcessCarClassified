<?php 
$on = !wire('input')->urlSegment1 ? 'current' : '';

$menuItems = array(	
	'carConditions' => $this->_('Car conditions'),
	'fuelTypes' => $this->_('Fuel types'),
	'transmissionTypes' => $this->_('Transmissions'),
	'brand' => $this->_('Brand'),
	'bodyStyle' => $this->_('Body styles'),
);

?>
<ul class="menu">
	<li class="<?php echo $on; ?>">
		<a href="<?php  echo wire('page')->url; ?>">Dashboard</a>
	</li>
	<?php foreach ($menuItems as $href => $caption): ?>
	<?php $on = wire('input')->urlSegment1 == $href ? 'current' : '' ; ?>		
		<li class="<?php echo $on; ?>">		
			<a href="<?php echo wire('page')->url . "" . $href; ?>">
				<?php echo $caption; ?>
			</a>
		</li>
	<?php endforeach; ?>
</ul>