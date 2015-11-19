/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:45 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <HomeSharing/HomeSharing-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class SSAccount, NSURL, NSString, NSNumber;

@interface HSConnectionConfiguration : NSObject <NSSecureCoding, NSCopying> {

	SSAccount* _account;
	NSURL* _baseURL;
	NSString* _libraryBagKey;
	NSString* _buildIdentifier;
	NSString* _purchaseClientIdentifier;
	NSNumber* _familyMemberStoreID;
	long long _requestReason;

}

@property (nonatomic,retain) SSAccount * account;                            //@synthesize account=_account - In the implementation block
@property (nonatomic,copy) NSURL * baseURL;                                  //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,copy) NSString * libraryBagKey;                         //@synthesize libraryBagKey=_libraryBagKey - In the implementation block
@property (nonatomic,copy) NSString * buildIdentifier;                       //@synthesize buildIdentifier=_buildIdentifier - In the implementation block
@property (nonatomic,copy) NSString * purchaseClientIdentifier;              //@synthesize purchaseClientIdentifier=_purchaseClientIdentifier - In the implementation block
@property (assign,nonatomic) long long requestReason;                        //@synthesize requestReason=_requestReason - In the implementation block
@property (nonatomic,copy) NSNumber * familyMemberStoreID;                   //@synthesize familyMemberStoreID=_familyMemberStoreID - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)baseURL;
-(void)setBaseURL:(NSURL *)arg1 ;
-(NSString *)libraryBagKey;
-(void)setLibraryBagKey:(NSString *)arg1 ;
-(NSString *)buildIdentifier;
-(void)setBuildIdentifier:(NSString *)arg1 ;
-(NSString *)purchaseClientIdentifier;
-(void)setPurchaseClientIdentifier:(NSString *)arg1 ;
-(long long)requestReason;
-(void)setRequestReason:(long long)arg1 ;
-(NSNumber *)familyMemberStoreID;
-(void)setFamilyMemberStoreID:(NSNumber *)arg1 ;
-(void)setAccount:(SSAccount *)arg1 ;
-(SSAccount *)account;
@end

