/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:03 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/MDM.framework/MDM
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface MCSoftwareUpdateInfo : NSObject {

	char _critical;
	char _restartRequired;
	NSString* _humanReadableLanguage;
	NSString* _humanReadableUpdateName;
	NSString* _productSystemName;
	NSString* _productVersion;
	NSString* _productBuildVersion;
	NSNumber* _downloadSize;
	NSNumber* _installationSize;

}

@property (nonatomic,retain) NSString * humanReadableLanguage;                           //@synthesize humanReadableLanguage=_humanReadableLanguage - In the implementation block
@property (nonatomic,retain) NSString * humanReadableUpdateName;                         //@synthesize humanReadableUpdateName=_humanReadableUpdateName - In the implementation block
@property (nonatomic,retain) NSString * productSystemName;                               //@synthesize productSystemName=_productSystemName - In the implementation block
@property (nonatomic,retain) NSString * productVersion;                                  //@synthesize productVersion=_productVersion - In the implementation block
@property (nonatomic,retain) NSString * productBuildVersion;                             //@synthesize productBuildVersion=_productBuildVersion - In the implementation block
@property (nonatomic,retain) NSNumber * downloadSize;                                    //@synthesize downloadSize=_downloadSize - In the implementation block
@property (nonatomic,retain) NSNumber * installationSize;                                //@synthesize installationSize=_installationSize - In the implementation block
@property (assign,getter=isCritical,nonatomic) char critical;                            //@synthesize critical=_critical - In the implementation block
@property (assign,getter=isRestartRequired,nonatomic) char restartRequired;              //@synthesize restartRequired=_restartRequired - In the implementation block
-(void)setProductVersion:(NSString *)arg1 ;
-(NSNumber *)downloadSize;
-(NSString *)humanReadableLanguage;
-(void)setHumanReadableLanguage:(NSString *)arg1 ;
-(void)setHumanReadableUpdateName:(NSString *)arg1 ;
-(NSString *)productSystemName;
-(void)setProductSystemName:(NSString *)arg1 ;
-(void)setDownloadSize:(NSNumber *)arg1 ;
-(void)setInstallationSize:(NSNumber *)arg1 ;
-(char)isCritical;
-(void)setCritical:(char)arg1 ;
-(char)isRestartRequired;
-(void)setRestartRequired:(char)arg1 ;
-(NSNumber *)installationSize;
-(NSString *)humanReadableUpdateName;
-(NSString *)productBuildVersion;
-(void)setProductBuildVersion:(NSString *)arg1 ;
-(NSString *)productVersion;
@end

