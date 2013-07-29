/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIPickerTableView, UIView, UIColor, UIPickerView;

@interface UIPickerColumnView : UIView <UIPickerTableViewContainerDelegate, UITableViewDataSource> {
    UIPickerTableView *_topTable;
    UIPickerTableView *_middleTable;
    UIPickerTableView *_bottomTable;
    UIView *_topContainerView;
    UIView *_middleContainerView;
    UIView *_bottomContainerView;
    float _middleBarHeight;
    float _rowHeight;
    UIPickerView *_pickerView;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _tableFrame;
    struct CATransform3D { 
        float m11; 
        float m12; 
        float m13; 
        float m14; 
        float m21; 
        float m22; 
        float m23; 
        float m24; 
        float m31; 
        float m32; 
        float m33; 
        float m34; 
        float m41; 
        float m42; 
        float m43; 
        float m44; 
    } _perspectiveTransform;
    UIColor *__textColor;
}

@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } selectionBarRect;
@property(readonly) int selectionBarRow;
@property(getter=_textColor,setter=_setTextColor:,retain) UIColor * _textColor;
@property float rowHeight;
@property struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; } perspectiveTransform;


- (void)dealloc;
- (void)setPerspectiveTransform:(struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg1;
- (struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })perspectiveTransform;
- (void)_moveTableViewIfNecessary:(id)arg1 toContentOffset:(struct CGPoint { float x1; float x2; })arg2;
- (struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })_transformForTableWithTranslationX:(float)arg1;
- (struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })_transformForTableWithPerspectiveTranslationX:(float)arg1;
- (float)_horizontalBiasForEndTables;
- (void)_centerTableInContainer:(id)arg1;
- (id)_createTableViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)_createContainerViewWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })selectionBarRect;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)pickerTableView:(id)arg1 didChangeSelectionBarRowFrom:(int)arg2 to:(int)arg3;
- (void)_pickerTableViewDidChangeContentOffset:(id)arg1;
- (BOOL)_usesCheckSelection;
- (BOOL)_soundsEnabled;
- (void)_sendCheckedRow:(int)arg1 inTableView:(id)arg2 checked:(BOOL)arg3;
- (id)_textColor;
- (BOOL)isRowChecked:(int)arg1;
- (void)_sendSelectionChangedFromTable:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_tableFrame;
- (BOOL)_containsTable:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })_visibleGlobalRows;
- (BOOL)_scrollRowAtIndexPathToSelectionBar:(id)arg1 animated:(BOOL)arg2;
- (void)endUpdates;
- (void)beginUpdates;
- (BOOL)selectRow:(int)arg1 animated:(BOOL)arg2 notify:(BOOL)arg3;
- (void)setSelectionBarRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)rowHeight;
- (void)setAllowsMultipleSelection:(BOOL)arg1;
- (void)clearDataSourceAndDelegate;
- (int)selectionBarRow;
- (id)cellForRowAtIndexPath:(id)arg1;
- (int)numberOfRowsInSection:(int)arg1;
- (void)setRowHeight:(float)arg1;
- (void)_setTextColor:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 tableFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 middleBarHeight:(float)arg3 rowHeight:(float)arg4 pickerView:(id)arg5 transform:(struct CATransform3D { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg6;
- (void)reloadData;
- (id)_preferredTable;

@end
