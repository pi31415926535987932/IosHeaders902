/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:32 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSString;

@interface CKDContainerInfo : NSObject <NSCopying, NSSecureCoding> {

	NSURL* _publicCloudDBURL;
	NSURL* _publicShareServiceURL;
	NSURL* _publicDeviceServiceURL;
	NSString* _containerScopedUserID;

}

@property (nonatomic,copy) NSURL * publicCloudDBURL;                      //@synthesize publicCloudDBURL=_publicCloudDBURL - In the implementation block
@property (nonatomic,copy) NSURL * publicShareServiceURL;                 //@synthesize publicShareServiceURL=_publicShareServiceURL - In the implementation block
@property (nonatomic,copy) NSURL * publicDeviceServiceURL;                //@synthesize publicDeviceServiceURL=_publicDeviceServiceURL - In the implementation block
@property (nonatomic,copy) NSString * containerScopedUserID;              //@synthesize containerScopedUserID=_containerScopedUserID - In the implementation block
+(char)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)CKPropertiesDescription;
-(NSURL *)publicCloudDBURL;
-(void)setPublicCloudDBURL:(NSURL *)arg1 ;
-(NSURL *)publicShareServiceURL;
-(void)setPublicShareServiceURL:(NSURL *)arg1 ;
-(NSURL *)publicDeviceServiceURL;
-(void)setPublicDeviceServiceURL:(NSURL *)arg1 ;
-(NSString *)containerScopedUserID;
-(void)setContainerScopedUserID:(NSString *)arg1 ;
@end

