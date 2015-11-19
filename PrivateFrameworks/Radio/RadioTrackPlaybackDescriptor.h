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
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSDictionary;

@interface RadioTrackPlaybackDescriptor : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	char _current;
	NSDate* _expirationDate;
	double _pauseTime;
	NSDate* _skipDate;
	long long _storeID;
	NSDictionary* _trackInfo;

}

@property (getter=isCurrent,nonatomic,readonly) char current;              //@synthesize current=_current - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate;                    //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,readonly) double pauseTime;                           //@synthesize pauseTime=_pauseTime - In the implementation block
@property (nonatomic,readonly) NSDate * skipDate;                          //@synthesize skipDate=_skipDate - In the implementation block
@property (nonatomic,readonly) long long storeID;                          //@synthesize storeID=_storeID - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * trackInfo;              //@synthesize trackInfo=_trackInfo - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithTrack:(id)arg1 ;
-(NSDate *)expirationDate;
-(double)pauseTime;
-(char)isCurrent;
-(id)queueTrackDictionary;
-(NSDate *)skipDate;
-(long long)storeID;
-(NSDictionary *)trackInfo;
@end

