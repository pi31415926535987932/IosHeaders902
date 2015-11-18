/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:46:39 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class WebBookmarkCollection;

@interface SFFolderPickerList : NSObject {

	unsigned _style;
	WebBookmarkCollection* _bookmarkCollection;

}
-(id)initWithBookmarkCollection:(id)arg1 style:(unsigned)arg2 ;
-(id)folderListItemsIgnoringIdentifiers:(id)arg1 ;
-(void)_appendFolderAndChildren:(id)arg1 toArray:(id)arg2 depth:(unsigned)arg3 ignoringIdentifiers:(id)arg4 ;
-(void)_appendChildrenOfFolder:(id)arg1 toArray:(id)arg2 depth:(unsigned)arg3 ignoringIdentifiers:(id)arg4 ;
@end

