/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:49 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBIconIndexNode.h>
#import <SpringBoard/SBIconIndexMutableListObserver.h>
#import <SpringBoard/SBIconListModelObserver.h>

@class NSString, SBFolderIcon, NSMutableSet, NSCountedSet, NSHashTable, SBIconIndexMutableList;

@interface SBFolder : NSObject <SBIconIndexNode, SBIconIndexMutableListObserver, SBIconListModelObserver> {

	NSString* _displayName;
	NSString* _defaultDisplayName;
	char _displayNameDirty;
	char _open;
	SBFolderIcon* _icon;
	char _cancelable;
	NSMutableSet* _addedIcons;
	NSMutableSet* _removedIcons;
	NSCountedSet* _coalesceChangesRequests;
	unsigned _maxListCount;
	unsigned _maxIconCountInLists;
	NSHashTable* _nodeObservers;
	NSHashTable* _folderObservers;
	SBIconIndexMutableList* _lists;

}

@property (nonatomic,copy) NSString * displayName;                             //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) char isOpen;                                      //@synthesize open=_open - In the implementation block
@property (assign,nonatomic) SBFolderIcon * icon;                              //@synthesize icon=_icon - In the implementation block
@property (assign,getter=isCancelable,nonatomic) char cancelable;              //@synthesize cancelable=_cancelable - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)isRootFolderClass;
-(id)visibleIcons;
-(id)indexPathForIcon:(id)arg1 ;
-(id)folderContainingIndexPath:(id)arg1 relativeIndexPath:(id*)arg2 ;
-(char)canAddIcon;
-(void)enumerateAllIconsUsingBlock:(/*^block*/id)arg1 ;
-(void)startCoalescingContentChangesWithRequestID:(id)arg1 ;
-(void)stopCoalescingContentChangesForRequestID:(id)arg1 ;
-(id)indexPathForIconWithIdentifier:(id)arg1 ;
-(id)iconAtIndexPath:(id)arg1 ;
-(id)listContainingLeafIconWithIdentifier:(id)arg1 ;
-(id)placeIcon:(id)arg1 atIndexPath:(id*)arg2 ;
-(id)performCascadingIconInsertion:(id)arg1 indexPath:(id)arg2 ;
-(unsigned)maxListCount;
-(void)removeIconAtIndexPath:(id)arg1 ;
-(void)compactIconsAndLists;
-(void)removeEmptyList:(id)arg1 ;
-(void)setCancelable:(char)arg1 ;
-(id)nodeIdentifier;
-(id)indexPathForNodeIdentifier:(id)arg1 ;
-(char)containsNodeIdentifier:(id)arg1 ;
-(id)iconsOfClass:(Class)arg1 ;
-(id)leafIcons;
-(id)allIcons;
-(void)markIconStateClean;
-(id)initWithMaxListCount:(unsigned)arg1 maxIconCountInLists:(unsigned)arg2 ;
-(id)insertIcon:(id)arg1 atIndexPath:(id*)arg2 ;
-(id)folderIcons;
-(char)compactLists;
-(id)indexPathForFirstFreeSlotAvoidingFirstList:(char)arg1 ;
-(char)isIconStateDirty;
-(void)addNodeObserver:(id)arg1 ;
-(void)addFolderObserver:(id)arg1 ;
-(void)removeNodeObserver:(id)arg1 ;
-(void)removeFolderObserver:(id)arg1 ;
-(id)containedNodeIdentifiers;
-(id)indexPathsForContainedNodeIdentifier:(id)arg1 prefixPath:(id)arg2 ;
-(id)nodesAlongIndexPath:(id)arg1 consumedIndexes:(unsigned)arg2 ;
-(id)nodeDescriptionWithPrefix:(id)arg1 ;
-(unsigned)indexOfList:(id)arg1 ;
-(id)addEmptyList;
-(id)_listsForCompaction;
-(void)_removeLists:(id)arg1 ;
-(void)_addList:(id)arg1 ;
-(id)_createNewListWithIcon:(id)arg1 ;
-(Class)listModelClass;
-(id)performCascadingIconInsertion:(id)arg1 listIndex:(unsigned)arg2 iconIndex:(unsigned)arg3 ;
-(void)stopCoalescingContentChangesForRequestID:(id)arg1 forceReload:(char)arg2 ;
-(char)_isCoalescingContentChanges;
-(void)iconList:(id)arg1 didRemoveIcon:(id)arg2 ;
-(void)iconList:(id)arg1 didAddIcon:(id)arg2 ;
-(void)list:(id)arg1 didAddContainedNodeIdentifiers:(id)arg2 ;
-(void)list:(id)arg1 didRemoveContainedNodeIdentifiers:(id)arg2 ;
-(void)iconList:(id)arg1 didReplaceIcon:(id)arg2 withIcon:(id)arg3 ;
-(id)defaultDisplayName;
-(void)setDefaultDisplayName:(id)arg1 ;
-(char)shouldRemoveWhenEmpty;
-(char)canRemoveIcons;
-(char)canEditDisplayName;
-(void)_setLists:(id)arg1 ;
-(void)purgeLists;
-(id)listContainingIcon:(id)arg1 ;
-(id)indexPathForIcon:(id)arg1 includingPlaceholders:(char)arg2 ;
-(char)isFull;
-(void)setIsOpen:(char)arg1 ;
-(char)isRootFolder;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(char)isEmpty;
-(void)setIcon:(SBFolderIcon *)arg1 ;
-(SBFolderIcon *)icon;
-(NSString *)displayName;
-(id)listAtIndex:(unsigned)arg1 ;
-(id)addIcon:(id)arg1 ;
-(id)lists;
-(char)isOpen;
-(void)setDisplayName:(NSString *)arg1 ;
-(unsigned)listCount;
-(char)isCancelable;
@end

