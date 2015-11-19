/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:10 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSURL, NSString, NSSet;

@interface CalDAVPrincipalEmailDetailsResult : NSObject {

	NSURL* _principalURL;
	NSString* _displayName;
	NSSet* _addresses;

}

@property (nonatomic,retain) NSURL * principalURL;                //@synthesize principalURL=_principalURL - In the implementation block
@property (nonatomic,retain) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSSet * addresses;                   //@synthesize addresses=_addresses - In the implementation block
+(id)resultFromResponseItem:(id)arg1 ;
-(void)setAddresses:(NSSet *)arg1 ;
-(NSSet *)addresses;
-(id)description;
-(NSString *)displayName;
-(void)setPrincipalURL:(NSURL *)arg1 ;
-(NSURL *)principalURL;
-(void)setDisplayName:(NSString *)arg1 ;
@end
