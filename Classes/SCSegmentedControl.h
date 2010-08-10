//
//  SCSegmentedControl.h
//  TouchCustoms
//
//  Created by Aleks Nesterow on 1/25/10.
//	aleks.nesterow@gmail.com
//	
//  Copyright © 2010 Screen Customs s.r.o.
//	All rights reserved.
//	
//	Purpose
//	Represents a multi-row segmented control.
//

#import "SCSegmentColorScheme.h"

enum {
	SCSegmentedControlNoSegment = -1 /* Segment index for no selected segment. */
};

@interface SCSegmentedControl : UIControl {

@private
	SCSegmentColorScheme _colorScheme;
	NSUInteger _columnCount, _rowCount;
	NSArray *_columnPattern;
	NSArray *_segmentTitles;
	NSArray *_segmentImages;
	NSMutableArray *_segments;
	NSInteger _selectedIndex;
}

@property (nonatomic, assign) SCSegmentColorScheme colorScheme;
@property (nonatomic, assign) NSUInteger columnCount;
@property (nonatomic, assign) NSUInteger rowCount;
/** 
  * Overrides columnCount. Allows you to have e. g. 2 columns in the first row and 3 columns in the second row.
  * 
  * Initialization example:
  * [NSArray arrayWithObjects:[NSNumber numberWithUnsignedInt:2], [NSNumber numberWithUnsignedInt:3], nil];
  * 
  */
@property (nonatomic, retain) NSArray *columnPattern;
/** If you specified 3 columns and 2 rows, this array should contain 6 items. */
@property (nonatomic, copy) NSArray *segmentTitles;
/** If you specified 3 columns and 2 rows, this array should contain 6 items.
  * Overrides segmentTitles, which means that if segmentImages array is valid,
  * the control will render images instead of text for segments. */
@property (nonatomic, copy) NSArray *segmentImages;

@property (nonatomic, assign) NSInteger selectedIndex;

@end
