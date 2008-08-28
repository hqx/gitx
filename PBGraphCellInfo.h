//
//  PBGraphCellInfo.h
//  GitX
//
//  Created by Pieter de Bie on 27-08-08.
//  Copyright 2008 __MyCompanyName__. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface PBGraphCellInfo : NSObject
{
	int position;
	NSArray* lines;
	int numColumns;
	BOOL hasRef;
}
@property(readonly)  NSArray* lines;
@property(assign)  int position, numColumns;
@property(assign) BOOL hasRef;

- (id)initWithPosition: (int) p andLines: (NSArray*) l;

@end