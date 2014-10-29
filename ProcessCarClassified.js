$(document).ready(function() {
	
	/* 
	 * Toggle all checkboxes in th for 'car-condition' tables 
	 */
	$('input.toggle_all').click(function(){
		if ($(this).prop('checked')) {
			$('.toggle').prop('checked', true);
		} else {
			$('.toggle').prop('checked', false);
		}
	});

	// If we are NOT on the widgets or authors tables, then disable sorting on first column
	if (!$('table').hasClass('noDisable')) {
			if ($.tablesorter != undefined) $.tablesorter.defaults.headers = {0:{sorter:false}};//works but requires two clicks to kick-in!
	}
}); 
