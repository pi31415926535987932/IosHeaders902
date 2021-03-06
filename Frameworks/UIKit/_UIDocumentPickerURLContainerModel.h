/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:20 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/_UIDocumentPickerContainerModel.h>
#import <UIKit/_UIArrayControllerDelegate.h>

@class NSArray, NSURL, NSString, _UIDocumentPickerDirectoryObserver;

@interface _UIDocumentPickerURLContainerModel : _UIDocumentPickerContainerModel <_UIArrayControllerDelegate> {

	char _isRootContainer;
	char _isObservingContainers;
	double _startObservingTime;
	NSArray* _modelObjects;
	NSArray* _pickableTypes;
	unsigned _pickerMode;
	NSURL* _url;
	NSString* _displayTitle;
	_UIDocumentPickerDirectoryObserver* _observer;

}

@property (nonatomic,retain) NSURL * url;                                                //@synthesize url=_url - In the implementation block
@property (nonatomic,copy) NSString * displayTitle;                                      //@synthesize displayTitle=_displayTitle - In the implementation block
@property (nonatomic,retain) _UIDocumentPickerDirectoryObserver * observer;              //@synthesize observer=_observer - In the implementation block
@property (nonatomic,retain) NSArray * modelObjects;                                     //@synthesize modelObjects=_modelObjects - In the implementation block
@property (nonatomic,copy) NSArray * pickableTypes;                                      //@synthesize pickableTypes=_pickableTypes - In the implementation block
@property (assign,nonatomic) unsigned pickerMode;                                        //@synthesize pickerMode=_pickerMode - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_tagColorsDidChange;
+(id)tagColorsByTag;
+(id)_tagBlipColors;
+(id)allTags;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(NSURL *)url;
-(id)initWithURL:(id)arg1 pickableTypes:(id)arg2 mode:(unsigned)arg3 ;
-(id)scopes;
-(char)shouldShowTopLevelContainers;
-(NSString *)displayTitle;
-(id)_createObserver;
-(char)afterInitialUpdate;
-(NSArray *)modelObjects;
-(void)updateSortDescriptors;
-(void)startMonitoringChanges;
-(void)stopMonitoringChanges;
-(void)refreshItem:(id)arg1 thumbnailOnly:(char)arg2 ;
-(NSArray *)pickableTypes;
-(unsigned)pickerMode;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setPickableTypes:(NSArray *)arg1 ;
-(void)setPickerMode:(unsigned)arg1 ;
-(void)setDisplayTitle:(NSString *)arg1 ;
-(_UIDocumentPickerDirectoryObserver *)observer;
-(id)_containerListDidChange;
-(void)setObserver:(_UIDocumentPickerDirectoryObserver *)arg1 ;
-(void)callUpdateHandlerWithNewItems:(id)arg1 diff:(id)arg2 ;
-(char)shouldShowContainerForType:(id)arg1 ;
-(char)shouldAllowPickingType:(id)arg1 ;
-(void)setModelObjects:(NSArray *)arg1 ;
-(void)arrayController:(id)arg1 modelChanged:(id)arg2 differences:(id)arg3 ;
@end

