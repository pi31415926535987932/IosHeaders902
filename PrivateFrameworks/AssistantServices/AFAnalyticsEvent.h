/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:02 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary;

@interface AFAnalyticsEvent : NSObject <NSCopying, NSSecureCoding> {

	int _type;
	NSDictionary* _context;
	unsigned long long _machAbsoluteTime;

}

@property (nonatomic,readonly) int type;                                         //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long machAbsoluteTime;              //@synthesize machAbsoluteTime=_machAbsoluteTime - In the implementation block
@property (nonatomic,readonly) NSDictionary * context;                           //@synthesize context=_context - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)context;
-(id)initWithType:(int)arg1 machAbsoluteTime:(unsigned long long)arg2 context:(id)arg3 ;
-(unsigned long long)machAbsoluteTime;
@end

