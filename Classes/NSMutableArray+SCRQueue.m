//
//  NSMutableArray+SCRQueue.m
//  TouchCustoms
//
//  Created by Aleks Nesterow on 2/7/10.
//	aleks.nesterow@gmail.com
//	
//  Copyright © 2010 Screen Customs s.r.o.
//	All rights reserved.
//

#import "NSMutableArray+SCRQueue.h"

@implementation NSMutableArray (SCRQueue)

- (void)enqueue:(id)object {

	[self insertObject:object atIndex:0];
}

- (id)dequeue {
	
	id lastObject = [self lastObject];
	[self removeLastObject];
	return lastObject;
}

@end
