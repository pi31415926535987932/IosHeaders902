/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:47 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/Support/softwareupdateservicesd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol SUAutoInstallManagerDelegate <NSObject>
@required
-(void)autoInstallManager:(id)arg1 operationWasConsented:(id)arg2;
-(void)autoInstallManager:(id)arg1 didCancelOperation:(id)arg2;
-(void)autoInstallManager:(id)arg1 didExpireOperation:(id)arg2;
-(void)autoInstallManager:(id)arg1 isReadyToInstall:(id)arg2;

@end

