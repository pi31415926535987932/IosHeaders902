/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:08 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <BulletinBoard/BulletinBoard-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, BBSectionIcon, NSArray, NSData;

@interface BBSectionInfo : NSObject <NSCopying, NSSecureCoding> {

	NSString* _sectionID;
	NSString* _subsectionID;
	int _sectionType;
	int _sectionCategory;
	char _showsInNotificationCenter;
	unsigned _suppressedSettings;
	unsigned _pushSettings;
	unsigned _alertType;
	char _showsInLockScreen;
	char _showsOnBluetoothDevices;
	NSString* _pathToWeeAppPluginBundle;
	NSString* _displayName;
	BBSectionIcon* _icon;
	NSArray* _subsections;
	BBSectionInfo* _parentSection;
	NSString* _factorySectionID;
	NSArray* _dataProviderIDs;
	NSArray* _filters;
	char _suppressFromSettings;
	char _displaysCriticalBulletins;
	char _allowsNotifications;
	char _showsOnExternalDevices;
	char _hideWeeApp;
	char _showsMessagePreview;
	int _subsectionPriority;
	unsigned _version;

}

@property (nonatomic,copy) NSString * sectionID;                             //@synthesize sectionID=_sectionID - In the implementation block
@property (nonatomic,copy) NSString * subsectionID;                          //@synthesize subsectionID=_subsectionID - In the implementation block
@property (assign,nonatomic) int sectionType;                                //@synthesize sectionType=_sectionType - In the implementation block
@property (assign,nonatomic) int sectionCategory;                            //@synthesize sectionCategory=_sectionCategory - In the implementation block
@property (assign,nonatomic) char suppressFromSettings;                      //@synthesize suppressFromSettings=_suppressFromSettings - In the implementation block
@property (assign,nonatomic) char showsInNotificationCenter;                 //@synthesize showsInNotificationCenter=_showsInNotificationCenter - In the implementation block
@property (assign,nonatomic) char showsInLockScreen;                         //@synthesize showsInLockScreen=_showsInLockScreen - In the implementation block
@property (assign,nonatomic) char showsOnExternalDevices;                    //@synthesize showsOnExternalDevices=_showsOnExternalDevices - In the implementation block
@property (assign,nonatomic) unsigned pushSettings;                          //@synthesize pushSettings=_pushSettings - In the implementation block
@property (assign,nonatomic) unsigned alertType;                             //@synthesize alertType=_alertType - In the implementation block
@property (assign,nonatomic) char showsMessagePreview;                       //@synthesize showsMessagePreview=_showsMessagePreview - In the implementation block
@property (assign,nonatomic) char allowsNotifications; 
@property (assign,nonatomic) unsigned suppressedSettings;                    //@synthesize suppressedSettings=_suppressedSettings - In the implementation block
@property (assign,nonatomic) char hideWeeApp;                                //@synthesize hideWeeApp=_hideWeeApp - In the implementation block
@property (nonatomic,copy) NSString * pathToWeeAppPluginBundle;              //@synthesize pathToWeeAppPluginBundle=_pathToWeeAppPluginBundle - In the implementation block
@property (nonatomic,copy) NSString * displayName;                           //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) BBSectionIcon * icon;                             //@synthesize icon=_icon - In the implementation block
@property (assign,nonatomic) char displaysCriticalBulletins;                 //@synthesize displaysCriticalBulletins=_displaysCriticalBulletins - In the implementation block
@property (nonatomic,copy) NSArray * subsections;                            //@synthesize subsections=_subsections - In the implementation block
@property (assign,nonatomic) BBSectionInfo * parentSection;                  //@synthesize parentSection=_parentSection - In the implementation block
@property (assign,nonatomic) int subsectionPriority;                         //@synthesize subsectionPriority=_subsectionPriority - In the implementation block
@property (assign,nonatomic) unsigned version;                               //@synthesize version=_version - In the implementation block
@property (nonatomic,copy) NSArray * filters;                                //@synthesize filters=_filters - In the implementation block
@property (assign,nonatomic) char enabled; 
@property (nonatomic,copy,readonly) NSData * iconData; 
@property (assign,nonatomic) unsigned bulletinCount; 
@property (assign,nonatomic) unsigned notificationCenterLimit; 
@property (nonatomic,copy) NSString * factorySectionID;                      //@synthesize factorySectionID=_factorySectionID - In the implementation block
@property (nonatomic,copy) NSArray * dataProviderIDs;                        //@synthesize dataProviderIDs=_dataProviderIDs - In the implementation block
+(char)supportsSecureCoding;
+(char)defaultStateForSetting:(unsigned)arg1 inSectionType:(int)arg2 ;
+(id)defaultSectionInfoForSection:(id)arg1 ;
+(id)defaultSectionInfoForType:(int)arg1 ;
-(int)sectionType;
-(void)setSectionType:(int)arg1 ;
-(char)enabled;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)description;
-(void)setEnabled:(char)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFilters:(NSArray *)arg1 ;
-(NSArray *)filters;
-(void)setIcon:(BBSectionIcon *)arg1 ;
-(BBSectionIcon *)icon;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)version;
-(NSString *)displayName;
-(void)setShowsMessagePreview:(char)arg1 ;
-(NSArray *)dataProviderIDs;
-(char)showsInLockScreen;
-(NSString *)factorySectionID;
-(id)effectiveSectionInfoWithFactoryInfo:(id)arg1 ;
-(id)effectiveSectionInfo;
-(id)_subsectionForID:(id)arg1 ;
-(void)_replaceSubsection:(id)arg1 ;
-(unsigned)pushSettings;
-(char)hideWeeApp;
-(void)setHideWeeApp:(char)arg1 ;
-(void)setFactorySectionID:(NSString *)arg1 ;
-(int)sectionCategory;
-(void)_configureWithDefaultsForSectionType:(int)arg1 ;
-(void)setParentSection:(BBSectionInfo *)arg1 ;
-(void)setShowsInNotificationCenter:(char)arg1 ;
-(void)setShowsInLockScreen:(char)arg1 ;
-(void)setShowsOnExternalDevices:(char)arg1 ;
-(void)setBulletinCount:(unsigned)arg1 ;
-(void)setAllowsNotifications:(char)arg1 ;
-(BBSectionInfo *)parentSection;
-(char)allowsNotifications;
-(void)setSubsections:(NSArray *)arg1 ;
-(void)setDataProviderIDs:(NSArray *)arg1 ;
-(void)setNotificationCenterLimit:(unsigned)arg1 ;
-(void)setSectionCategory:(int)arg1 ;
-(char)suppressFromSettings;
-(char)showsOnExternalDevices;
-(void)setPathToWeeAppPluginBundle:(NSString *)arg1 ;
-(char)displaysCriticalBulletins;
-(void)setDisplaysCriticalBulletins:(char)arg1 ;
-(void)_addSubsection:(id)arg1 ;
-(int)subsectionPriority;
-(void)setSubsectionPriority:(int)arg1 ;
-(void)_associateDataProviderSectionInfo:(id)arg1 ;
-(void)_dissociateDataProviderSectionInfo:(id)arg1 ;
-(unsigned)bulletinCount;
-(unsigned)notificationCenterLimit;
-(void)updateWithDefaultFilters:(id)arg1 ;
-(void)updateWithDefaultSectionInfo:(id)arg1 ;
-(NSString *)sectionID;
-(char)showsMessagePreview;
-(void)setAlertType:(unsigned)arg1 ;
-(unsigned)alertType;
-(void)setSectionID:(NSString *)arg1 ;
-(void)setPushSettings:(unsigned)arg1 ;
-(void)setSubsectionID:(NSString *)arg1 ;
-(void)setSuppressedSettings:(unsigned)arg1 ;
-(NSData *)iconData;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)pathToWeeAppPluginBundle;
-(unsigned)suppressedSettings;
-(NSString *)subsectionID;
-(NSArray *)subsections;
-(char)showsInNotificationCenter;
-(void)setSuppressFromSettings:(char)arg1 ;
@end

