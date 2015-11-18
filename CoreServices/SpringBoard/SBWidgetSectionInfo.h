/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:54 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBNotificationCenterSectionInfo.h>

@class NSString, SBWidgetRowInfo;

@interface SBWidgetSectionInfo : SBNotificationCenterSectionInfo {

	NSString* _identifier;
	SBWidgetRowInfo* _widgetRowInfo;

}

@property (nonatomic,retain) SBWidgetRowInfo * widgetRowInfo;              //@synthesize widgetRowInfo=_widgetRowInfo - In the implementation block
@property (nonatomic,copy) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
+(id)sectionInfoWithIdentifier:(id)arg1 ;
-(void)populateReusableView:(id)arg1 ;
-(SBWidgetRowInfo *)widgetRowInfo;
-(void)setWidgetRowInfo:(SBWidgetRowInfo *)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(Class)reusableViewClass;
@end

