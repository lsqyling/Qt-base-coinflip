//
// Created by 10580.
//

#ifndef QT_BASE_SPINBOX_DELEGATE_H
#define QT_BASE_SPINBOX_DELEGATE_H
#include <QStyledItemDelegate>

class spinbox_delegate : public QStyledItemDelegate
{
public:
    QWidget *createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const override;

    void setEditorData(QWidget *editor, const QModelIndex &index) const override;

    void setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const override;

    void
    updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const override;


};


#endif //QT_BASE_SPINBOX_DELEGATE_H
