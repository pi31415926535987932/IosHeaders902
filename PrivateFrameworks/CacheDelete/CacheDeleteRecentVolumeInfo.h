/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:10 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CacheDelete.framework/CacheDelete
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSNumber, NSMutableDictionary;

@interface CacheDeleteRecentVolumeInfo : NSObject <NSSecureCoding> {

	NSString* _volume;
	NSDate* _timestamp;
	NSNumber* _freespace;
	NSMutableDictionary* _services;

}

@property (nonatomic,retain) NSString * volume;                           //@synthesize volume=_volume - In the implementation block
@property (nonatomic,retain) NSDate * timestamp;                          //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSNumber * freespace;                        //@synthesize freespace=_freespace - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * services;              //@synthesize services=_services - In the implementation block
+(char)supportsSecureCoding;
+(id)cacheDeleteRecentVolumeInfo:(id)arg1 freespace:(id)arg2 timestamp:(id)arg3 volumeName:(id)arg4 ;
-(void)setVolume:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(id)initWithServices:(id)arg1 freespace:(id)arg2 timestamp:(id)arg3 volumeName:(id)arg4 ;
-(NSNumber *)freespace;
-(int)validate:(double)arg1 threshold:(id)arg2 ;
-(void)setFreespace:(NSNumber *)arg1 ;
-(NSString *)volume;
-(NSMutableDictionary *)services;
-(void)setServices:(NSMutableDictionary *)arg1 ;
@end

