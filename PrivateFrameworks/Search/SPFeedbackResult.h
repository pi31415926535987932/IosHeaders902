/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:30 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, NSDictionary;

@interface SPFeedbackResult : NSObject <NSSecureCoding> {

	char _topHit;
	char _activityIsPublic;
	char _hasAssociatedUserActivity;
	unsigned _domain;
	int _flags;
	NSString* _fbr;
	NSString* _activityIdentifier;
	NSString* _activityRequiredString;
	NSString* _activitySecondaryString;
	NSString* _activitybundleID;
	NSString* _activityTitle;
	NSData* _activityData;
	NSString* _activityType;
	NSDictionary* _attributes;
	NSData* _thumbnailData;
	NSString* _appShortVersion;
	NSString* _lastSearchQuery;

}

@property (readonly) NSString * parsecString; 
@property (assign,nonatomic) unsigned domain;                                 //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) int flags;                                       //@synthesize flags=_flags - In the implementation block
@property (assign,nonatomic) char topHit;                                     //@synthesize topHit=_topHit - In the implementation block
@property (nonatomic,retain) NSString * fbr;                                  //@synthesize fbr=_fbr - In the implementation block
@property (nonatomic,retain) NSString * activityIdentifier;                   //@synthesize activityIdentifier=_activityIdentifier - In the implementation block
@property (nonatomic,retain) NSString * activityRequiredString;               //@synthesize activityRequiredString=_activityRequiredString - In the implementation block
@property (nonatomic,retain) NSString * activitySecondaryString;              //@synthesize activitySecondaryString=_activitySecondaryString - In the implementation block
@property (nonatomic,retain) NSString * activitybundleID;                     //@synthesize activitybundleID=_activitybundleID - In the implementation block
@property (nonatomic,retain) NSString * activityTitle;                        //@synthesize activityTitle=_activityTitle - In the implementation block
@property (nonatomic,retain) NSData * activityData;                           //@synthesize activityData=_activityData - In the implementation block
@property (nonatomic,retain) NSString * activityType;                         //@synthesize activityType=_activityType - In the implementation block
@property (assign) char activityIsPublic;                                     //@synthesize activityIsPublic=_activityIsPublic - In the implementation block
@property (nonatomic,retain) NSDictionary * attributes;                       //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,retain) NSData * thumbnailData;                          //@synthesize thumbnailData=_thumbnailData - In the implementation block
@property (nonatomic,retain) NSString * appShortVersion;                      //@synthesize appShortVersion=_appShortVersion - In the implementation block
@property (assign,nonatomic) char hasAssociatedUserActivity;                  //@synthesize hasAssociatedUserActivity=_hasAssociatedUserActivity - In the implementation block
@property (nonatomic,retain) NSString * lastSearchQuery;                      //@synthesize lastSearchQuery=_lastSearchQuery - In the implementation block
+(char)supportsSecureCoding;
-(void)setActivityType:(NSString *)arg1 ;
-(void)setDomain:(unsigned)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)activityType;
-(unsigned)domain;
-(NSString *)activityTitle;
-(NSDictionary *)attributes;
-(void)setAttributes:(NSDictionary *)arg1 ;
-(void)setFlags:(int)arg1 ;
-(int)flags;
-(char)topHit;
-(NSData *)thumbnailData;
-(void)setThumbnailData:(NSData *)arg1 ;
-(NSString *)lastSearchQuery;
-(NSString *)activityIdentifier;
-(NSString *)activityRequiredString;
-(NSString *)activitySecondaryString;
-(NSString *)activitybundleID;
-(NSData *)activityData;
-(char)activityIsPublic;
-(NSString *)appShortVersion;
-(void)setAppShortVersion:(NSString *)arg1 ;
-(id)topHitStringForDomain:(id)arg1 ;
-(NSString *)parsecString;
-(NSString *)fbr;
-(void)setFbr:(NSString *)arg1 ;
-(void)setTopHit:(char)arg1 ;
-(void)setActivitybundleID:(NSString *)arg1 ;
-(char)hasAssociatedUserActivity;
-(void)setHasAssociatedUserActivity:(char)arg1 ;
-(void)setActivityIsPublic:(char)arg1 ;
-(void)setActivityIdentifier:(NSString *)arg1 ;
-(void)setActivityRequiredString:(NSString *)arg1 ;
-(void)setActivitySecondaryString:(NSString *)arg1 ;
-(void)setActivityData:(NSData *)arg1 ;
-(void)setLastSearchQuery:(NSString *)arg1 ;
-(void)setActivityTitle:(NSString *)arg1 ;
@end

