/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:55 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol CPLLibraryManagerDelegate <NSObject>
@optional
-(void)libraryManagerDidChangeConfiguration:(id)arg1;
-(id)displayableName;

@required
-(void)libraryManagerStatusDidChange:(id)arg1;
-(void)libraryManagerDidStartSynchronization:(id)arg1;
-(void)libraryManagerHasChangesToPull:(id)arg1;

@end

