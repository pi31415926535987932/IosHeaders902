/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:27:34 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@class NSArray, _UIDictionaryManager;

@interface _UIRemoteDictionaryViewController : UITableViewController {

	NSArray* _availableDictionaries;
	_UIDictionaryManager* _dictionaryAssetManager;

}

@property (nonatomic,retain) _UIDictionaryManager * dictionaryAssetManager;              //@synthesize dictionaryAssetManager=_dictionaryAssetManager - In the implementation block
-(char)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(char)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)initWithStyle:(int)arg1 ;
-(void)viewDidLoad;
-(id)_cloudBackgroundImage;
-(id)_downloadArrowImage;
-(id)_downloadImageWithTintColor:(id)arg1 ;
-(void)_handleDownloadButton:(id)arg1 ;
-(id)_downloadOptionsDictionary;
-(id)_downloadButton;
-(_UIDictionaryManager *)dictionaryAssetManager;
-(void)setDictionaryAssetManager:(_UIDictionaryManager *)arg1 ;
@end

