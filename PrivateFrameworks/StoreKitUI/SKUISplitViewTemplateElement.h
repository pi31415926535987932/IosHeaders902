/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:54 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIJSDOMFeatureNavigationDocument, SKUIViewElement;

@interface SKUISplitViewTemplateElement : SKUIViewElement {

	SKUIJSDOMFeatureNavigationDocument* _leftNavigationDocument;
	int _preferredDisplayMode;
	SKUIJSDOMFeatureNavigationDocument* _rightNavigationDocument;

}

@property (nonatomic,readonly) int preferredDisplayMode;                                        //@synthesize preferredDisplayMode=_preferredDisplayMode - In the implementation block
@property (readonly) SKUIJSDOMFeatureNavigationDocument * leftNavigationDocument; 
@property (readonly) SKUIJSDOMFeatureNavigationDocument * rightNavigationDocument; 
@property (nonatomic,readonly) SKUIViewElement * leftSplitElement; 
@property (nonatomic,readonly) SKUIViewElement * rightSplitElement; 
@property (nonatomic,readonly) char usesInlineSplitContent; 
+(id)supportedFeatures;
-(int)preferredDisplayMode;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(id)_splitElementForIndex:(int)arg1 ;
-(SKUIViewElement *)leftSplitElement;
-(SKUIViewElement *)rightSplitElement;
-(SKUIJSDOMFeatureNavigationDocument *)leftNavigationDocument;
-(SKUIJSDOMFeatureNavigationDocument *)rightNavigationDocument;
-(char)usesInlineSplitContent;
@end

