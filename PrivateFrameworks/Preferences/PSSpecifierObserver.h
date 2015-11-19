/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:07 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol PSSpecifierObserver <NSObject>
@property (nonatomic,readonly) int observerType; 
@required
-(void)dataSource:(id)arg1 performUpdates:(id)arg2;
-(void)invalidateSpecifiersForDataSource:(id)arg1;
-(int)observerType;

@end

