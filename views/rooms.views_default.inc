<?php


/**
 * Implements hook_views_default_views().
 */
function rooms_views_default_views() {
  $views = array();

  $view = new view();

  $view->name = 'search_rooms_types';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_search_types';
  $view->human_name = 'Search Rooms Types';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Search Rooms Types';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Indexed Type: Image */
  $handler->display->display_options['fields']['field_rooms_image']['id'] = 'field_rooms_image';
  $handler->display->display_options['fields']['field_rooms_image']['table'] = 'search_api_index_search_types';
  $handler->display->display_options['fields']['field_rooms_image']['field'] = 'field_rooms_image';
  $handler->display->display_options['fields']['field_rooms_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_rooms_image']['settings'] = array(
    'image_style' => 'medium',
    'image_link' => '',
  );
  /* Field: Indexed Type: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'search_api_index_search_types';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['link_to_entity'] = 0;
  /* Field: Indexed Type: Amenities */
  $handler->display->display_options['fields']['field_rooms_amenities']['id'] = 'field_rooms_amenities';
  $handler->display->display_options['fields']['field_rooms_amenities']['table'] = 'search_api_index_search_types';
  $handler->display->display_options['fields']['field_rooms_amenities']['field'] = 'field_rooms_amenities';
  $handler->display->display_options['fields']['field_rooms_amenities']['link_to_entity'] = 0;
  $handler->display->display_options['fields']['field_rooms_amenities']['view_mode'] = 'full';
  $handler->display->display_options['fields']['field_rooms_amenities']['bypass_access'] = 0;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'search-rooms-types';

  $views['search_rooms_types'] = $view;

  $view->name = 'rooms_types';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'bat_types';
  $view->human_name = 'Rooms Types';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Rooms Types';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'update any bat_type entity of bundle rooms';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Type: Type ID */
  $handler->display->display_options['fields']['type_id']['id'] = 'type_id';
  $handler->display->display_options['fields']['type_id']['table'] = 'bat_types';
  $handler->display->display_options['fields']['type_id']['field'] = 'type_id';
  /* Field: Type: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'bat_types';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  /* Field: Type: Status */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'bat_types';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['label'] = 'Published';
  $handler->display->display_options['fields']['status']['separator'] = '';
  /* Field: Type: Calendar links */
  $handler->display->display_options['fields']['calendars']['id'] = 'calendars';
  $handler->display->display_options['fields']['calendars']['table'] = 'bat_types';
  $handler->display->display_options['fields']['calendars']['field'] = 'calendars';
  $handler->display->display_options['fields']['calendars']['label'] = 'Calendars';
  /* Field: Type: Operations links */
  $handler->display->display_options['fields']['operations']['id'] = 'operations';
  $handler->display->display_options['fields']['operations']['table'] = 'bat_types';
  $handler->display->display_options['fields']['operations']['field'] = 'operations';
  $handler->display->display_options['fields']['operations']['label'] = 'Operations';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/rooms/rooms-types';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Rooms Types';
  $handler->display->display_options['menu']['description'] = 'Manage Rooms Types and their Units';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  $view = new view();
  $view->name = 'rooms_bookings';
  $view->description = 'A list of all events';
  $view->tag = 'bat';
  $view->base_table = 'bat_events';
  $view->human_name = 'Rooms Bookings';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Rooms Bookings';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'bypass bat_event entities access';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'event_id' => 'event_id',
    'name' => 'name',
    'start_date' => 'start_date',
    'end_date' => 'end_date',
    'unit_id' => 'unit_id',
    'type' => 'type',
    'name_1' => 'name_1',
    'operations' => 'operations',
  );
  $handler->display->display_options['style_options']['default'] = 'event_id';
  $handler->display->display_options['style_options']['info'] = array(
    'event_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'start_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'end_date' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'unit_id' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'type' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'Empty Message';
  $handler->display->display_options['empty']['area']['content'] = 'No events have been created yet.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Relationship: Events: Owner */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'bat_events';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['required'] = TRUE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['event_unit_reference_target_id']['id'] = 'event_unit_reference_target_id';
  $handler->display->display_options['relationships']['event_unit_reference_target_id']['table'] = 'field_data_event_unit_reference';
  $handler->display->display_options['relationships']['event_unit_reference_target_id']['field'] = 'event_unit_reference_target_id';
  $handler->display->display_options['relationships']['event_unit_reference_target_id']['required'] = TRUE;
  /* Field: Events: Events ID */
  $handler->display->display_options['fields']['event_id']['id'] = 'event_id';
  $handler->display->display_options['fields']['event_id']['table'] = 'bat_events';
  $handler->display->display_options['fields']['event_id']['field'] = 'event_id';
  $handler->display->display_options['fields']['event_id']['label'] = 'Event';
  /* Field: Events: Start Date */
  $handler->display->display_options['fields']['start_date']['id'] = 'start_date';
  $handler->display->display_options['fields']['start_date']['table'] = 'bat_events';
  $handler->display->display_options['fields']['start_date']['field'] = 'start_date';
  $handler->display->display_options['fields']['start_date']['label'] = 'Arrival';
  $handler->display->display_options['fields']['start_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['start_date']['date_format'] = 'custom';
  $handler->display->display_options['fields']['start_date']['custom_date_format'] = 'd-m-Y H:i';
  $handler->display->display_options['fields']['start_date']['second_date_format'] = 'long';
  /* Field: Events: End Date */
  $handler->display->display_options['fields']['end_date']['id'] = 'end_date';
  $handler->display->display_options['fields']['end_date']['table'] = 'bat_events';
  $handler->display->display_options['fields']['end_date']['field'] = 'end_date';
  $handler->display->display_options['fields']['end_date']['label'] = 'Departure';
  $handler->display->display_options['fields']['end_date']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['end_date']['date_format'] = 'custom';
  $handler->display->display_options['fields']['end_date']['custom_date_format'] = 'd-m-Y H:i';
  $handler->display->display_options['fields']['end_date']['second_date_format'] = 'long';
  /* Field: Events: Unit */
  $handler->display->display_options['fields']['event_unit_reference']['id'] = 'event_unit_reference';
  $handler->display->display_options['fields']['event_unit_reference']['table'] = 'field_data_event_unit_reference';
  $handler->display->display_options['fields']['event_unit_reference']['field'] = 'event_unit_reference';
  $handler->display->display_options['fields']['event_unit_reference']['settings'] = array(
    'link' => 1,
  );
  /* Field: Units: Type_id */
  $handler->display->display_options['fields']['type_id']['id'] = 'type_id';
  $handler->display->display_options['fields']['type_id']['table'] = 'bat_units';
  $handler->display->display_options['fields']['type_id']['field'] = 'type_id';
  $handler->display->display_options['fields']['type_id']['relationship'] = 'event_unit_reference_target_id';
  $handler->display->display_options['fields']['type_id']['label'] = 'Unit Type';
  /* Field: Events: Event Type */
  $handler->display->display_options['fields']['type']['id'] = 'type';
  $handler->display->display_options['fields']['type']['table'] = 'bat_events';
  $handler->display->display_options['fields']['type']['field'] = 'type';
  $handler->display->display_options['fields']['type']['label'] = 'Type';
  $handler->display->display_options['fields']['type']['hide_alter_empty'] = FALSE;
  /* Field: User: Name */
  $handler->display->display_options['fields']['name_1']['id'] = 'name_1';
  $handler->display->display_options['fields']['name_1']['table'] = 'users';
  $handler->display->display_options['fields']['name_1']['field'] = 'name';
  $handler->display->display_options['fields']['name_1']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name_1']['label'] = 'Owner';
  /* Field: Events: Operations links */
  $handler->display->display_options['fields']['operations']['id'] = 'operations';
  $handler->display->display_options['fields']['operations']['table'] = 'bat_events';
  $handler->display->display_options['fields']['operations']['field'] = 'operations';
  $handler->display->display_options['fields']['operations']['hide_alter_empty'] = FALSE;
  /* Filter criterion: Events: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'bat_events';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'availability' => 'availability',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['filters']['type']['expose']['operator_id'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['label'] = 'Event Type';
  $handler->display->display_options['filters']['type']['expose']['operator'] = 'type_op';
  $handler->display->display_options['filters']['type']['expose']['identifier'] = 'type';
  $handler->display->display_options['filters']['type']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Events: Events ID */
  $handler->display->display_options['filters']['event_id']['id'] = 'event_id';
  $handler->display->display_options['filters']['event_id']['table'] = 'bat_events';
  $handler->display->display_options['filters']['event_id']['field'] = 'event_id';
  $handler->display->display_options['filters']['event_id']['group'] = 1;
  $handler->display->display_options['filters']['event_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['event_id']['expose']['operator_id'] = 'event_id_op';
  $handler->display->display_options['filters']['event_id']['expose']['label'] = 'Event ID';
  $handler->display->display_options['filters']['event_id']['expose']['operator'] = 'event_id_op';
  $handler->display->display_options['filters']['event_id']['expose']['identifier'] = 'event_id';
  $handler->display->display_options['filters']['event_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Events: Unit (event_unit_reference) */
  $handler->display->display_options['filters']['event_unit_reference_target_id']['id'] = 'event_unit_reference_target_id';
  $handler->display->display_options['filters']['event_unit_reference_target_id']['table'] = 'field_data_event_unit_reference';
  $handler->display->display_options['filters']['event_unit_reference_target_id']['field'] = 'event_unit_reference_target_id';
  $handler->display->display_options['filters']['event_unit_reference_target_id']['group'] = 1;
  $handler->display->display_options['filters']['event_unit_reference_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['event_unit_reference_target_id']['expose']['operator_id'] = 'event_unit_reference_target_id_op';
  $handler->display->display_options['filters']['event_unit_reference_target_id']['expose']['label'] = 'Unit';
  $handler->display->display_options['filters']['event_unit_reference_target_id']['expose']['operator'] = 'event_unit_reference_target_id_op';
  $handler->display->display_options['filters']['event_unit_reference_target_id']['expose']['identifier'] = 'event_unit_reference_target_id';
  $handler->display->display_options['filters']['event_unit_reference_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: User: Name */
  $handler->display->display_options['filters']['uid']['id'] = 'uid';
  $handler->display->display_options['filters']['uid']['table'] = 'users';
  $handler->display->display_options['filters']['uid']['field'] = 'uid';
  $handler->display->display_options['filters']['uid']['relationship'] = 'uid';
  $handler->display->display_options['filters']['uid']['value'] = '';
  $handler->display->display_options['filters']['uid']['group'] = 1;
  $handler->display->display_options['filters']['uid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['uid']['expose']['operator_id'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['label'] = 'Owner';
  $handler->display->display_options['filters']['uid']['expose']['operator'] = 'uid_op';
  $handler->display->display_options['filters']['uid']['expose']['identifier'] = 'uid';
  $handler->display->display_options['filters']['uid']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Events: Start Date */
  $handler->display->display_options['filters']['start_date']['id'] = 'start_date';
  $handler->display->display_options['filters']['start_date']['table'] = 'bat_events';
  $handler->display->display_options['filters']['start_date']['field'] = 'start_date';
  $handler->display->display_options['filters']['start_date']['operator'] = '>=';
  $handler->display->display_options['filters']['start_date']['group'] = 1;
  $handler->display->display_options['filters']['start_date']['exposed'] = TRUE;
  $handler->display->display_options['filters']['start_date']['expose']['operator_id'] = 'start_date_op';
  $handler->display->display_options['filters']['start_date']['expose']['label'] = 'Start Date';
  $handler->display->display_options['filters']['start_date']['expose']['operator'] = 'start_date_op';
  $handler->display->display_options['filters']['start_date']['expose']['identifier'] = 'start_date';
  $handler->display->display_options['filters']['start_date']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Events: End Date */
  $handler->display->display_options['filters']['end_date']['id'] = 'end_date';
  $handler->display->display_options['filters']['end_date']['table'] = 'bat_events';
  $handler->display->display_options['filters']['end_date']['field'] = 'end_date';
  $handler->display->display_options['filters']['end_date']['operator'] = '>=';
  $handler->display->display_options['filters']['end_date']['group'] = 1;
  $handler->display->display_options['filters']['end_date']['exposed'] = TRUE;
  $handler->display->display_options['filters']['end_date']['expose']['operator_id'] = 'end_date_op';
  $handler->display->display_options['filters']['end_date']['expose']['label'] = 'End Date';
  $handler->display->display_options['filters']['end_date']['expose']['operator'] = 'end_date_op';
  $handler->display->display_options['filters']['end_date']['expose']['identifier'] = 'end_date';
  $handler->display->display_options['filters']['end_date']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Units: Type_id */
  $handler->display->display_options['filters']['type_id']['id'] = 'type_id';
  $handler->display->display_options['filters']['type_id']['table'] = 'bat_units';
  $handler->display->display_options['filters']['type_id']['field'] = 'type_id';
  $handler->display->display_options['filters']['type_id']['relationship'] = 'event_unit_reference_target_id';
  $handler->display->display_options['filters']['type_id']['group'] = 1;
  $handler->display->display_options['filters']['type_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['type_id']['expose']['operator_id'] = 'type_id_op';
  $handler->display->display_options['filters']['type_id']['expose']['label'] = 'Unit Type';
  $handler->display->display_options['filters']['type_id']['expose']['operator'] = 'type_id_op';
  $handler->display->display_options['filters']['type_id']['expose']['identifier'] = 'type_id';
  $handler->display->display_options['filters']['type_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    3 => 0,
  );
  /* Filter criterion: Events: Blocking */
  $handler->display->display_options['filters']['blocking']['id'] = 'blocking';
  $handler->display->display_options['filters']['blocking']['table'] = 'bat_events';
  $handler->display->display_options['filters']['blocking']['field'] = 'blocking';
  $handler->display->display_options['filters']['blocking']['value'] = 'blocking';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->display->display_options['path'] = 'admin/rooms/bookings';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Manage Bookings';
  $handler->display->display_options['menu']['description'] = 'A List of Rooms bookings';
  $handler->display->display_options['menu']['weight'] = '10';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'Events';
  $handler->display->display_options['tab_options']['description'] = 'A list of all events.';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $handler->display->display_options['tab_options']['name'] = 'management';

  
  return $views;
}