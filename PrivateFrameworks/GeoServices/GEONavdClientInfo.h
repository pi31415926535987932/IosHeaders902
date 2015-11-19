/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:30 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface GEONavdClientInfo : NSObject <NSCopying, NSSecureCoding> {

	NSString* _canonicalName;
	NSString* _uniqueClientId;

}

@property (nonatomic,copy) NSString * canonicalName;               //@synthesize canonicalName=_canonicalName - In the implementation block
@property (nonatomic,copy) NSString * uniqueClientId;              //@synthesize uniqueClientId=_uniqueClientId - In the implementation block
+(char)supportsSecureCoding;
+(id)clientInfoForNavdPredictions;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCanonicalName:(id)arg1 instanceId:(unsigned)arg2 ;
-(void)setUniqueClientId:(NSString *)arg1 ;
-(char)isNavdClientInfo;
-(void)setCanonicalName:(NSString *)arg1 ;
-(NSString *)uniqueClientId;
-(NSString *)canonicalName;
-(char)isCalendarClientInfo;
@end

