/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:22 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Celestial/BWNodeEnumerator.h>

@class NSMutableArray;

@interface BWDepthFirstEnumerator : BWNodeEnumerator {

	NSMutableArray* _stack;
	unsigned _currentSourceIndex;

}
-(void)dealloc;
-(id)nextObject;
-(id)initWithGraph:(id)arg1 ;
@end

