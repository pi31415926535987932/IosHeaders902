/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:18 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSArray;

@interface RadioPlaybackContext : NSObject <NSCopying, NSMutableCopying> {

	int _numberOfSkipsUsed;
	NSArray* _trackPlaybackDescriptorQueue;

}

@property (nonatomic,readonly) int numberOfSkipsUsed;                                    //@synthesize numberOfSkipsUsed=_numberOfSkipsUsed - In the implementation block
@property (nonatomic,copy,readonly) NSArray * trackPlaybackDescriptorQueue;              //@synthesize trackPlaybackDescriptorQueue=_trackPlaybackDescriptorQueue - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)playbackContextDictionary;
-(int)numberOfSkipsUsed;
-(NSArray *)trackPlaybackDescriptorQueue;
@end

