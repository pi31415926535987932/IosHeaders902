/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:17 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSDate, NSString, RadioTrack;

@interface RadioHistoryItem : NSObject <NSCopying, NSMutableCopying> {

	NSDate* _datePlayed;
	NSString* _externalIdentifier;
	RadioTrack* _track;
	int _type;

}

@property (nonatomic,readonly) NSDate * datePlayed;                             //@synthesize datePlayed=_datePlayed - In the implementation block
@property (nonatomic,copy,readonly) NSString * externalIdentifier;              //@synthesize externalIdentifier=_externalIdentifier - In the implementation block
@property (nonatomic,readonly) RadioTrack * track;                              //@synthesize track=_track - In the implementation block
@property (nonatomic,readonly) int type;                                        //@synthesize type=_type - In the implementation block
-(RadioTrack *)track;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)externalIdentifier;
-(NSDate *)datePlayed;
@end

