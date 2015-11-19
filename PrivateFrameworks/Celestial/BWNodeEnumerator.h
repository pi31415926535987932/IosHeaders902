/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:22 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class BWGraph, NSMutableDictionary;

@interface BWNodeEnumerator : NSEnumerator {

	BWGraph* _graph;
	unsigned _depth;
	NSMutableDictionary* _nodeVisitCountMap;

}
+(void)initialize;
-(void)dealloc;
-(id)initWithGraph:(id)arg1 ;
-(unsigned)_updateVisitedCount:(id)arg1 ;
-(id)_visitedCount:(id)arg1 ;
@end

