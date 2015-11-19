/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:28 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString, NSDate;

@interface WBSRemoteHistoryItem : NSObject <NSSecureCoding> {

	NSURL* _url;
	NSString* _title;
	NSDate* _lastVisitTime;

}

@property (nonatomic,readonly) NSURL * url;                         //@synthesize url=_url - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;               //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSDate * lastVisitTime;              //@synthesize lastVisitTime=_lastVisitTime - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(NSURL *)url;
-(NSString *)title;
-(id)initWithURL:(id)arg1 title:(id)arg2 lastVisitTime:(id)arg3 ;
-(NSDate *)lastVisitTime;
@end

