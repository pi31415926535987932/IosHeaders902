/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:39 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreFoundation/NSArray.h>

@protocol SYChangeSerializer;
@class NSArray;

@interface _SYLazyChangeArray : NSArray {

	NSArray* _source;
	id<SYChangeSerializer> _decoder;
	char _isSYObjectDataArray;

}
-(unsigned)count;
-(id)objectAtIndex:(unsigned)arg1 ;
-(id)initWithSYObjectDataArray:(id)arg1 decoder:(id)arg2 ;
-(id)initWithSourceArray:(id)arg1 decoder:(id)arg2 ;
@end

